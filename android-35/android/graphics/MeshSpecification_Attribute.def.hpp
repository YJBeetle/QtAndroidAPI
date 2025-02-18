#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::graphics
{
	class MeshSpecification_Attribute : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MeshSpecification_Attribute(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MeshSpecification_Attribute(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MeshSpecification_Attribute(jint arg0, jint arg1, JString arg2);
		
		// Methods
		JString getName() const;
		jint getOffset() const;
		jint getType() const;
		JString toString() const;
	};
} // namespace android::graphics

