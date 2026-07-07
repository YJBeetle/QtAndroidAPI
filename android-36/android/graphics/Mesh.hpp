#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "./Color.def.hpp"
#include "./MeshSpecification.def.hpp"
#include "./RectF.def.hpp"
#include "../../JString.hpp"
#include "../../java/nio/Buffer.def.hpp"
#include "../../java/nio/ShortBuffer.def.hpp"
#include "./Mesh.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint Mesh::TRIANGLES()
	{
		return getStaticField<jint>(
			"android.graphics.Mesh",
			"TRIANGLES"
		);
	}
	inline jint Mesh::TRIANGLE_STRIP()
	{
		return getStaticField<jint>(
			"android.graphics.Mesh",
			"TRIANGLE_STRIP"
		);
	}
	
	// Constructors
	inline Mesh::Mesh(android::graphics::MeshSpecification arg0, jint arg1, java::nio::Buffer arg2, jint arg3, android::graphics::RectF arg4)
		: JObject(
			"android.graphics.Mesh",
			"(Landroid/graphics/MeshSpecification;ILjava/nio/Buffer;ILandroid/graphics/RectF;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4.object()
		) {}
	inline Mesh::Mesh(android::graphics::MeshSpecification arg0, jint arg1, java::nio::Buffer arg2, jint arg3, java::nio::ShortBuffer arg4, android::graphics::RectF arg5)
		: JObject(
			"android.graphics.Mesh",
			"(Landroid/graphics/MeshSpecification;ILjava/nio/Buffer;ILjava/nio/ShortBuffer;Landroid/graphics/RectF;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	inline void Mesh::setColorUniform(JString arg0, android::graphics::Color arg1) const
	{
		callMethod<void>(
			"setColorUniform",
			"(Ljava/lang/String;Landroid/graphics/Color;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Mesh::setColorUniform(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setColorUniform",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Mesh::setColorUniform(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"setColorUniform",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Mesh::setFloatUniform(JString arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"setFloatUniform",
			"(Ljava/lang/String;[F)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>()
		);
	}
	inline void Mesh::setFloatUniform(JString arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setFloatUniform",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Mesh::setFloatUniform(JString arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setFloatUniform",
			"(Ljava/lang/String;FF)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void Mesh::setFloatUniform(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	inline void Mesh::setFloatUniform(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4) const
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
	inline void Mesh::setIntUniform(JString arg0, JIntArray arg1) const
	{
		callMethod<void>(
			"setIntUniform",
			"(Ljava/lang/String;[I)V",
			arg0.object<jstring>(),
			arg1.object<jintArray>()
		);
	}
	inline void Mesh::setIntUniform(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setIntUniform",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Mesh::setIntUniform(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setIntUniform",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void Mesh::setIntUniform(JString arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void Mesh::setIntUniform(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
