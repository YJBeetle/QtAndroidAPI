#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class ParcelFileDescriptor;
}
class JString;

namespace android::telecom
{
	class Connection_RttTextStream : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Connection_RttTextStream(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Connection_RttTextStream(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString read() const;
		JString readImmediately() const;
		void write(JString arg0) const;
	};
} // namespace android::telecom

