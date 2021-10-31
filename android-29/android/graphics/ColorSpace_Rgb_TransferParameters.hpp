#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class ColorSpace_Rgb_TransferParameters : public __JniBaseClass
	{
	public:
		// Fields
		jdouble a();
		jdouble b();
		jdouble c();
		jdouble d();
		jdouble e();
		jdouble f();
		jdouble g();
		
		ColorSpace_Rgb_TransferParameters(QAndroidJniObject obj);
		// Constructors
		ColorSpace_Rgb_TransferParameters(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4);
		ColorSpace_Rgb_TransferParameters(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5, jdouble arg6);
		ColorSpace_Rgb_TransferParameters() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::graphics

