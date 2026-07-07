#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class SurfaceControl_OnJankDataListenerRegistration : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControl_OnJankDataListenerRegistration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl_OnJankDataListenerRegistration(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void flush() const;
		void removeAfter(jlong arg0) const;
	};
} // namespace android::view

