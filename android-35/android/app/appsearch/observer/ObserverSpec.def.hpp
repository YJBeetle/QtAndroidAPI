#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::appsearch::observer
{
	class ObserverSpec : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ObserverSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObserverSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getFilterSchemas() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch::observer

