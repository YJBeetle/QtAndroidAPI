#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::location
{
	class Location;
}

namespace android::location::altitude
{
	class AltitudeConverter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AltitudeConverter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AltitudeConverter(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AltitudeConverter();
		
		// Methods
		void addMslAltitudeToLocation(android::content::Context arg0, android::location::Location arg1) const;
	};
} // namespace android::location::altitude

