#pragma once

#include "../../JObject.hpp"

namespace android::gesture
{
	class OrientedBoundingBox : public JObject
	{
	public:
		// Fields
		jfloat centerX();
		jfloat centerY();
		jfloat height();
		jfloat orientation();
		jfloat squareness();
		jfloat width();
		
		// QJniObject forward
		template<typename ...Ts> explicit OrientedBoundingBox(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OrientedBoundingBox(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::gesture

