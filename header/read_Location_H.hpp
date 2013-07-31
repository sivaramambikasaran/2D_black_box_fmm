//	This Source Code Form is subject to the terms of the Mozilla Public
//	License, v. 2.0. If a copy of the MPL was not distributed with this
//	file, You can obtain one at http://mozilla.org/MPL/2.0/.
//
//	<author>Sivaram Ambikasaran, Ruoxi Wang</author>
//	
//	read_Location_H.hpp
//
#ifndef __read_Location_H_hpp__
#define __read_Location_H_hpp__

#include"H2_2D_Node.hpp"
#include"environment.hpp"

using namespace Eigen;
using namespace std;


void read_Location_And_Measurement_Operator (const string& filename, unsigned long& N, vector<Point>& location, unsigned& m, MatrixXd& H);

void read_Measurement_Operator(const string& s, unsigned long row, MatrixXd& H, unsigned m);

#endif //(__read_Location_H_hpp__)