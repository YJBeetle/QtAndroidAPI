#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class DataOrigin;
}
class JString;

namespace android::health::connect::datatypes
{
	class DataOrigin_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DataOrigin_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataOrigin_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DataOrigin_Builder();
		
		// Methods
		android::health::connect::datatypes::DataOrigin build() const;
		android::health::connect::datatypes::DataOrigin_Builder setPackageName(JString arg0) const;
	};
} // namespace android::health::connect::datatypes

