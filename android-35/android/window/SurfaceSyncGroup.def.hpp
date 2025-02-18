#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class SurfaceControl_Transaction;
}
namespace android::view
{
	class SurfaceControlViewHost_SurfacePackage;
}
class JString;

namespace android::window
{
	class SurfaceSyncGroup : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceSyncGroup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceSyncGroup(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SurfaceSyncGroup(JString arg0);
		
		// Methods
		jboolean add(JObject arg0, JObject arg1) const;
		jboolean add(android::view::SurfaceControlViewHost_SurfacePackage arg0, JObject arg1) const;
		void addTransaction(android::view::SurfaceControl_Transaction arg0) const;
		void markSyncReady() const;
	};
} // namespace android::window

