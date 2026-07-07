#pragma once

#include "../../../JObject.hpp"

namespace android::ranging::uwb
{
	class UwbComplexChannel;
}

namespace android::ranging::uwb
{
	class UwbComplexChannel_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UwbComplexChannel_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UwbComplexChannel_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UwbComplexChannel_Builder();
		
		// Methods
		android::ranging::uwb::UwbComplexChannel build() const;
		android::ranging::uwb::UwbComplexChannel_Builder setChannel(jint arg0) const;
		android::ranging::uwb::UwbComplexChannel_Builder setPreambleIndex(jint arg0) const;
	};
} // namespace android::ranging::uwb

