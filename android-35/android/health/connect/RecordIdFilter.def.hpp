#pragma once

#include "../../../JObject.hpp"

class JClass;
class JString;

namespace android::health::connect
{
	class RecordIdFilter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RecordIdFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecordIdFilter(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::health::connect::RecordIdFilter fromClientRecordId(JClass arg0, JString arg1);
		static android::health::connect::RecordIdFilter fromId(JClass arg0, JString arg1);
		JString getClientRecordId() const;
		JString getId() const;
		JClass getRecordType() const;
	};
} // namespace android::health::connect

