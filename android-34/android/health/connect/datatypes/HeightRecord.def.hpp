#pragma once

#include "./InstantRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
namespace android::health::connect::datatypes::units
{
	class Length;
}
class JObject;

namespace android::health::connect::datatypes
{
	class HeightRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType HEIGHT_AVG();
		static android::health::connect::datatypes::AggregationType HEIGHT_MAX();
		static android::health::connect::datatypes::AggregationType HEIGHT_MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit HeightRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		HeightRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Length getHeight() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

