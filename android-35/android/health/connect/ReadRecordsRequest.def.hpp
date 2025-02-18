#pragma once

#include "../../../JObject.hpp"

class JClass;

namespace android::health::connect
{
	class ReadRecordsRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadRecordsRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReadRecordsRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JClass getRecordType() const;
	};
} // namespace android::health::connect

