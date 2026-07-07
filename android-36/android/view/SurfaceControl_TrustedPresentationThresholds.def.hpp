#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class SurfaceControl_TrustedPresentationThresholds : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControl_TrustedPresentationThresholds(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl_TrustedPresentationThresholds(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SurfaceControl_TrustedPresentationThresholds(jfloat arg0, jfloat arg1, jint arg2);
		
		// Methods
	};
} // namespace android::view

