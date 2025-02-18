#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JString;

namespace android::mtp
{
	class MtpDeviceInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MtpDeviceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MtpDeviceInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JIntArray getEventsSupported() const;
		JString getManufacturer() const;
		JString getModel() const;
		JIntArray getOperationsSupported() const;
		JString getSerialNumber() const;
		JString getVersion() const;
		jboolean isEventSupported(jint arg0) const;
		jboolean isOperationSupported(jint arg0) const;
	};
} // namespace android::mtp

