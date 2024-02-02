#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace android::graphics
{
	class ColorSpace;
}
class JString;

namespace android::graphics
{
	class MeshSpecification : public JObject
	{
	public:
		// Fields
		static jint ALPHA_TYPE_OPAQUE();
		static jint ALPHA_TYPE_PREMULTIPLIED();
		static jint ALPHA_TYPE_UNKNOWN();
		static jint ALPHA_TYPE_UNPREMULTIPLIED();
		static jint TYPE_FLOAT();
		static jint TYPE_FLOAT2();
		static jint TYPE_FLOAT3();
		static jint TYPE_FLOAT4();
		static jint TYPE_UBYTE4();
		
		// QJniObject forward
		template<typename ...Ts> explicit MeshSpecification(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MeshSpecification(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::MeshSpecification make(JArray arg0, jint arg1, JArray arg2, JString arg3, JString arg4);
		static android::graphics::MeshSpecification make(JArray arg0, jint arg1, JArray arg2, JString arg3, JString arg4, android::graphics::ColorSpace arg5);
		static android::graphics::MeshSpecification make(JArray arg0, jint arg1, JArray arg2, JString arg3, JString arg4, android::graphics::ColorSpace arg5, jint arg6);
	};
} // namespace android::graphics

