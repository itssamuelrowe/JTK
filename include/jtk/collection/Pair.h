/*
 * Copyright 2018-2019 OneCube
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Saturday, September 15, 2018

#ifndef JTK_COLLECTION_PAIR_H
#define JTK_COLLECTION_PAIR_H

/*******************************************************************************
 * Pair                                                                        *
 *******************************************************************************/

/**
 * @class Pair
 * @ingroup jtk_collection
 * @author Samuel Rowe <samuelrowe1999@gmail.com>
 * @since JTK 1.1
 */
struct jtk_Pair_t {
    void* m_leftElement;
    void* m_rightElement;
};

/**
 * @memberof Pair
 */
typedef struct jtk_Pair_t jtk_Pair_t

/* Constructor */

/**
 * @memberof Pair
 */
jtk_Pair_t* jtk_Pair_new();

/**
 * @memberof Pair
 */
void jtk_Pair_delete(jtk_Pair_t* pair);

/* Left Element */

/**
 * @memberof Pair
 */
void jtk_Pair_setLeftElement(jtk_Pair_t* pair, void* element);

/**
 * @memberof Pair
 */
void* jtk_Pair_getLeftElement(jtk_Pair_t* pair);

/* Right Element */

/**
 * @memberof Pair
 */
void jtk_Pair_setRightElement(jtk_Pair_t* pair, void* element);

/**
 * @memberof Pair
 */
void* jtk_Pair_getRightElement(jtk_Pair_t* pair);

#endif /* JTK_COLLECTION_PAIR_H */