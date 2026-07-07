#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "./Color.def.hpp"
#include "./ColorFilter.def.hpp"
#include "./RuntimeXfermode.def.hpp"
#include "./Shader.def.hpp"
#include "../../JString.hpp"
#include "./RuntimeColorFilter.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline RuntimeColorFilter::RuntimeColorFilter(JString arg0)
		: android::graphics::ColorFilter(
			"android.graphics.RuntimeColorFilter",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline void RuntimeColorFilter::setColorUniform(JString arg0, android::graphics::Color arg1) const
	{
		callMethod<void>(
			"setColorUniform",
			"(Ljava/lang/String;Landroid/graphics/Color;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void RuntimeColorFilter::setColorUniform(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setColorUniform",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void RuntimeColorFilter::setColorUniform(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"setColorUniform",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void RuntimeColorFilter::setFloatUniform(JString arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"setFloatUniform",
			"(Ljava/lang/String;[F)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>()
		);
	}
	inline void RuntimeColorFilter::setFloatUniform(JString arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setFloatUniform",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void RuntimeColorFilter::setFloatUniform(JString arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setFloatUniform",
			"(Ljava/lang/String;FF)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void RuntimeColorFilter::setFloatUniform(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"setFloatUniform",
			"(Ljava/lang/String;FFF)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void RuntimeColorFilter::setFloatUniform(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4) const
	{
		callMethod<void>(
			"setFloatUniform",
			"(Ljava/lang/String;FFFF)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void RuntimeColorFilter::setInputColorFilter(JString arg0, android::graphics::ColorFilter arg1) const
	{
		callMethod<void>(
			"setInputColorFilter",
			"(Ljava/lang/String;Landroid/graphics/ColorFilter;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void RuntimeColorFilter::setInputShader(JString arg0, android::graphics::Shader arg1) const
	{
		callMethod<void>(
			"setInputShader",
			"(Ljava/lang/String;Landroid/graphics/Shader;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void RuntimeColorFilter::setInputXfermode(JString arg0, android::graphics::RuntimeXfermode arg1) const
	{
		callMethod<void>(
			"setInputXfermode",
			"(Ljava/lang/String;Landroid/graphics/RuntimeXfermode;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void RuntimeColorFilter::setIntUniform(JString arg0, JIntArray arg1) const
	{
		callMethod<void>(
			"setIntUniform",
			"(Ljava/lang/String;[I)V",
			arg0.object<jstring>(),
			arg1.object<jintArray>()
		);
	}
	inline void RuntimeColorFilter::setIntUniform(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setIntUniform",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void RuntimeColorFilter::setIntUniform(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setIntUniform",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void RuntimeColorFilter::setIntUniform(JString arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setIntUniform",
			"(Ljava/lang/String;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void RuntimeColorFilter::setIntUniform(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"setIntUniform",
			"(Ljava/lang/String;IIII)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::graphics

// Base class headers
#include "./ColorFilter.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
