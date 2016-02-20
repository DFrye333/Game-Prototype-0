#ifndef TRANSFORM_H
#define TRANSFORM_H

#include <cmath>

#include "../utility/matrix.h"
#include "../utility/vector.h"

namespace BD3GE
{
	class Transform
	{
		public:

								Transform();
								Transform(Matrix4 matrix);
								~Transform();
			void 				translate(Vector3 translation);
			void				scale(float scaler);
			// void				rotate();
			void 				to_float_array(float* float_array) const;
			Transform 			inverse(void) const;
			Matrix4				get_matrix(void) const;
			const float 		operator()(unsigned short i, unsigned short j) const;
			void 				operator()(unsigned short i, unsigned short j, float value);
			const Transform& 	operator=(const Transform& other);
			const Transform& 	operator*=(const Transform& other);
			const Transform 	operator*(const Transform& other) const;

		private:

			Matrix4 m_matrix;
	};
}

#endif // TRANSFORM_H