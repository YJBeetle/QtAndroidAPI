#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "./BitmapShader.def.hpp"
#include "./Color.def.hpp"
#include "./Shader.def.hpp"
#include "../../JString.hpp"
#include "./RuntimeShader.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline RuntimeShader::RuntimeShader(JString arg0)
		: android::graphics::Shader(
			"android.graphics.RuntimeShader",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline void RuntimeShader::setColorUniform(JString arg0, android::graphics::Color arg1) const
	{
		callMethod<void>(
			"setColorUniform",
			"(Ljava/lang/String;Landroid/graphics/Color;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void RuntimeShader::setColorUniform(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setColorUniform",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void RuntimeShader::setColorUniform(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"setColorUniform",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void RuntimeShader::setFloatUniform(JString arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"setFloatUniform",
			"(Ljava/lang/String;[F)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>()
		);
	}
	inline void RuntimeShader::setFloatUniform(JString arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setFloatUniform",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void RuntimeShader::setFloatUniform(JString arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setFloatUniform",
			"(Ljava/lang/String;FF)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void RuntimeShader::setFloatUniform(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	inline void RuntimeShader::setFloatUniform(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4) const
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
	inline void RuntimeShader::setInputBuffer(JString arg0, android::graphics::BitmapShader arg1) const
	{
		callMethod<void>(
			"setInputBuffer",
			"(Ljava/lang/String;Landroid/graphics/BitmapShader;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void RuntimeShader::setInputShader(JString arg0, android::graphics::Shader arg1) const
	{
		callMethod<void>(
			"setInputShader",
			"(Ljava/lang/String;Landroid/graphics/Shader;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void RuntimeShader::setIntUniform(JString arg0, JIntArray arg1) const
	{
		callMethod<void>(
			"setIntUniform",
			"(Ljava/lang/String;[I)V",
			arg0.object<jstring>(),
			arg1.object<jintArray>()
		);
	}
	inline void RuntimeShader::setIntUniform(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setIntUniform",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void RuntimeShader::setIntUniform(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setIntUniform",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void RuntimeShader::setIntUniform(JString arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void RuntimeShader::setIntUniform(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
#include "./Shader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
