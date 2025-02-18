#pragma once

#include "../app/Service.def.hpp"

namespace android::companion
{
	class AssociationInfo;
}
namespace android::content
{
	class Intent;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JString;

namespace android::companion
{
	class CompanionDeviceService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CompanionDeviceService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CompanionDeviceService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		CompanionDeviceService();
		
		// Methods
		void attachSystemDataTransport(jint arg0, java::io::InputStream arg1, java::io::OutputStream arg2) const;
		void detachSystemDataTransport(jint arg0) const;
		JObject onBind(android::content::Intent arg0) const;
		void onDeviceAppeared(android::companion::AssociationInfo arg0) const;
		void onDeviceAppeared(JString arg0) const;
		void onDeviceDisappeared(android::companion::AssociationInfo arg0) const;
		void onDeviceDisappeared(JString arg0) const;
	};
} // namespace android::companion

