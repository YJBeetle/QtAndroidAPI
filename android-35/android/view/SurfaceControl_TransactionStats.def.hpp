#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class SyncFence;
}

namespace android::view
{
	class SurfaceControl_TransactionStats : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControl_TransactionStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl_TransactionStats(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jlong getLatchTimeNanos() const;
		android::hardware::SyncFence getPresentFence() const;
	};
} // namespace android::view

