#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::graphics
{
	class MeshSpecification_Varying : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MeshSpecification_Varying(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MeshSpecification_Varying(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MeshSpecification_Varying(jint arg0, JString arg1);
		
		// Methods
		JString getName() const;
		jint getType() const;
		JString toString() const;
	};
} // namespace android::graphics

