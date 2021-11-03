#include "./ColorSpace_Rgb_TransferParameters.hpp"

namespace android::graphics
{
	// Fields
	jdouble ColorSpace_Rgb_TransferParameters::a()
	{
		return getField<jdouble>(
			"a"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::b()
	{
		return getField<jdouble>(
			"b"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::c()
	{
		return getField<jdouble>(
			"c"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::d()
	{
		return getField<jdouble>(
			"d"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::e()
	{
		return getField<jdouble>(
			"e"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::f()
	{
		return getField<jdouble>(
			"f"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::g()
	{
		return getField<jdouble>(
			"g"
		);
	}
	
	// QJniObject forward
	ColorSpace_Rgb_TransferParameters::ColorSpace_Rgb_TransferParameters(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ColorSpace_Rgb_TransferParameters::ColorSpace_Rgb_TransferParameters(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4)
		: JObject(
			"android.graphics.ColorSpace$Rgb$TransferParameters",
			"(DDDDD)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	ColorSpace_Rgb_TransferParameters::ColorSpace_Rgb_TransferParameters(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5, jdouble arg6)
		: JObject(
			"android.graphics.ColorSpace$Rgb$TransferParameters",
			"(DDDDDDD)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	jboolean ColorSpace_Rgb_TransferParameters::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ColorSpace_Rgb_TransferParameters::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics

