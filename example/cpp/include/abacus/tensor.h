/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*!
 * \file tensor.h
 * \brief a tensor
 */

#ifndef ABACUS_TENSOR_H_
#define ABACUS_TENSOR_H_

#include <string>

namespace abacus {

template<int dimension>
struct Shape {
    typedef unsigned index_t;
    /*! \brief dimension of the shape */
    static const int kDimension = dimension;
    /*! \brief a list to store the shape */
    index_t shape_[kDimension];
    /*! \brief default constructor, do nothing */
    Shape() {}
    /*! \brief constuctor
     *  \param s the shape to copy
     */
    Shape(const Shape<kDimension> & source) {
        #pragma unroll
        for (int i = 0; i < kDimension; i++) {
            this->shape_[i] = source[i];
        }
    }
    /*!
     * \brief get corresponding index
     * \param idx dimension index
     * \return the corresponding dimension size
     */
    index_t &operator[](index_t idx) {
        return shape_[idx];
    }
    /*!
     * \brief get corresponding index
     * \param idx dimension index
     * \return the corresponding dimension size
     */
    const index_t &operator[](index_t idx) const {
        return shape_[idx];
    }

};


} // namespace abacus

#endif //ABACUS_TENSOR_H_
