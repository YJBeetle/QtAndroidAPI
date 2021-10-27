#include "./ColorSpace_Rgb_TransferParameters.hpp"

namespace android::graphics
{
	// Fields
	jdouble ColorSpace_Rgb_TransferParameters::a()
	{
		return __thiz.getField<jdouble>(
			"a"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::b()
	{
		return __thiz.getField<jdouble>(
			"b"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::c()
	{
		return __thiz.getField<jdouble>(
			"c"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::d()
	{
		return __thiz.getField<jdouble>(
			"d"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::e()
	{
		return __thiz.getField<jdouble>(
			"e"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::f()
	{
		return __thiz.getField<jdouble>(
			"f"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::g()
	{
		return __thiz.getField<jdouble>(
			"g"
		);
	}
	
	ColorSpace_Rgb_TransferParameters::ColorSpace_Rgb_TransferParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ColorSpace_Rgb_TransferParameters::ColorSpace_Rgb_TransferParameters(jdouble &arg0, jdouble &arg1, jdouble &arg2, jdouble &arg3, jdouble &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb$TransferParameters",
			"(DDDDD)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	ColorSpace_Rgb_TransferParameters::ColorSpace_Rgb_TransferParameters(jdouble &arg0, jdouble &arg1, jdouble &arg2, jdouble &arg3, jdouble &arg4, jdouble &arg5, jdouble &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb$TransferParameters",
			"(DDDDDDD)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	
	// Methods
	jboolean ColorSpace_Rgb_TransferParameters::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ColorSpace_Rgb_TransferParameters::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics

