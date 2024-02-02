#pragma once

#include "./ForegroundServiceTypeException.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class MissingForegroundServiceTypeException : public android::app::ForegroundServiceTypeException
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit MissingForegroundServiceTypeException(const char *className, const char *sig, Ts...agv) : android::app::ForegroundServiceTypeException(className, sig, std::forward<Ts>(agv)...) {}
		MissingForegroundServiceTypeException(QJniObject obj) : android::app::ForegroundServiceTypeException(obj) {}
		
		// Constructors
		MissingForegroundServiceTypeException(JString arg0);
		
		// Methods
		jint describeContents() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

