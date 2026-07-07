#pragma once

#include "../../../JObject.hpp"

namespace android::service::persistentdata
{
	class PersistentDataBlockManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PersistentDataBlockManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PersistentDataBlockManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean isFactoryResetProtectionActive() const;
	};
} // namespace android::service::persistentdata

