#pragma once

#include "../../JObject.hpp"
#include "./ColorSpace_Rgb_TransferParameters.def.hpp"

namespace android::graphics
{
	// Fields
	inline jdouble ColorSpace_Rgb_TransferParameters::a()
	{
		return getField<jdouble>(
			"a"
		);
	}
	inline jdouble ColorSpace_Rgb_TransferParameters::b()
	{
		return getField<jdouble>(
			"b"
		);
	}
	inline jdouble ColorSpace_Rgb_TransferParameters::c()
	{
		return getField<jdouble>(
			"c"
		);
	}
	inline jdouble ColorSpace_Rgb_TransferParameters::d()
	{
		return getField<jdouble>(
			"d"
		);
	}
	inline jdouble ColorSpace_Rgb_TransferParameters::e()
	{
		return getField<jdouble>(
			"e"
		);
	}
	inline jdouble ColorSpace_Rgb_TransferParameters::f()
	{
		return getField<jdouble>(
			"f"
		);
	}
	inline jdouble ColorSpace_Rgb_TransferParameters::g()
	{
		return getField<jdouble>(
			"g"
		);
	}
	
	// Constructors
	inline ColorSpace_Rgb_TransferParameters::ColorSpace_Rgb_TransferParameters(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4)
		: JObject(
			"android.graphics.ColorSpace$Rgb$TransferParameters",
			"(DDDDD)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	inline ColorSpace_Rgb_TransferParameters::ColorSpace_Rgb_TransferParameters(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5, jdouble arg6)
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
	inline jboolean ColorSpace_Rgb_TransferParameters::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ColorSpace_Rgb_TransferParameters::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
