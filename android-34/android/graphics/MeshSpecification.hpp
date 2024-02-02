#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ColorSpace.def.hpp"
#include "../../JString.hpp"
#include "./MeshSpecification.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint MeshSpecification::ALPHA_TYPE_OPAQUE()
	{
		return getStaticField<jint>(
			"android.graphics.MeshSpecification",
			"ALPHA_TYPE_OPAQUE"
		);
	}
	inline jint MeshSpecification::ALPHA_TYPE_PREMULTIPLIED()
	{
		return getStaticField<jint>(
			"android.graphics.MeshSpecification",
			"ALPHA_TYPE_PREMULTIPLIED"
		);
	}
	inline jint MeshSpecification::ALPHA_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.graphics.MeshSpecification",
			"ALPHA_TYPE_UNKNOWN"
		);
	}
	inline jint MeshSpecification::ALPHA_TYPE_UNPREMULTIPLIED()
	{
		return getStaticField<jint>(
			"android.graphics.MeshSpecification",
			"ALPHA_TYPE_UNPREMULTIPLIED"
		);
	}
	inline jint MeshSpecification::TYPE_FLOAT()
	{
		return getStaticField<jint>(
			"android.graphics.MeshSpecification",
			"TYPE_FLOAT"
		);
	}
	inline jint MeshSpecification::TYPE_FLOAT2()
	{
		return getStaticField<jint>(
			"android.graphics.MeshSpecification",
			"TYPE_FLOAT2"
		);
	}
	inline jint MeshSpecification::TYPE_FLOAT3()
	{
		return getStaticField<jint>(
			"android.graphics.MeshSpecification",
			"TYPE_FLOAT3"
		);
	}
	inline jint MeshSpecification::TYPE_FLOAT4()
	{
		return getStaticField<jint>(
			"android.graphics.MeshSpecification",
			"TYPE_FLOAT4"
		);
	}
	inline jint MeshSpecification::TYPE_UBYTE4()
	{
		return getStaticField<jint>(
			"android.graphics.MeshSpecification",
			"TYPE_UBYTE4"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::MeshSpecification MeshSpecification::make(JArray arg0, jint arg1, JArray arg2, JString arg3, JString arg4)
	{
		return callStaticObjectMethod(
			"android.graphics.MeshSpecification",
			"make",
			"([Landroid/graphics/MeshSpecification$Attribute;I[Landroid/graphics/MeshSpecification$Varying;Ljava/lang/String;Ljava/lang/String;)Landroid/graphics/MeshSpecification;",
			arg0.object<jarray>(),
			arg1,
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		);
	}
	inline android::graphics::MeshSpecification MeshSpecification::make(JArray arg0, jint arg1, JArray arg2, JString arg3, JString arg4, android::graphics::ColorSpace arg5)
	{
		return callStaticObjectMethod(
			"android.graphics.MeshSpecification",
			"make",
			"([Landroid/graphics/MeshSpecification$Attribute;I[Landroid/graphics/MeshSpecification$Varying;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/ColorSpace;)Landroid/graphics/MeshSpecification;",
			arg0.object<jarray>(),
			arg1,
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object()
		);
	}
	inline android::graphics::MeshSpecification MeshSpecification::make(JArray arg0, jint arg1, JArray arg2, JString arg3, JString arg4, android::graphics::ColorSpace arg5, jint arg6)
	{
		return callStaticObjectMethod(
			"android.graphics.MeshSpecification",
			"make",
			"([Landroid/graphics/MeshSpecification$Attribute;I[Landroid/graphics/MeshSpecification$Varying;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/ColorSpace;I)Landroid/graphics/MeshSpecification;",
			arg0.object<jarray>(),
			arg1,
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object(),
			arg6
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
