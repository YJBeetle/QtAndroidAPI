#pragma once

#include "./ForegroundServiceTypeException.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class InvalidForegroundServiceTypeException : public android::app::ForegroundServiceTypeException
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidForegroundServiceTypeException(const char *className, const char *sig, Ts...agv) : android::app::ForegroundServiceTypeException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidForegroundServiceTypeException(QJniObject obj) : android::app::ForegroundServiceTypeException(obj) {}
		
		// Constructors
		InvalidForegroundServiceTypeException(JString arg0);
		
		// Methods
		jint describeContents() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

