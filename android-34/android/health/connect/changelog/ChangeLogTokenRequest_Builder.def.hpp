#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::changelog
{
	class ChangeLogTokenRequest;
}
namespace android::health::connect::datatypes
{
	class DataOrigin;
}
class JClass;

namespace android::health::connect::changelog
{
	class ChangeLogTokenRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChangeLogTokenRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChangeLogTokenRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ChangeLogTokenRequest_Builder();
		
		// Methods
		android::health::connect::changelog::ChangeLogTokenRequest_Builder addDataOriginFilter(android::health::connect::datatypes::DataOrigin arg0) const;
		android::health::connect::changelog::ChangeLogTokenRequest_Builder addRecordType(JClass arg0) const;
		android::health::connect::changelog::ChangeLogTokenRequest build() const;
	};
} // namespace android::health::connect::changelog

