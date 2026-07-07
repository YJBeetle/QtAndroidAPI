#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class DisplayLuts_Entry;
}
class JString;

namespace android::hardware
{
	class DisplayLuts : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayLuts(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayLuts(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DisplayLuts();
		
		// Methods
		void set(android::hardware::DisplayLuts_Entry arg0) const;
		void set(android::hardware::DisplayLuts_Entry arg0, android::hardware::DisplayLuts_Entry arg1) const;
		JString toString() const;
	};
} // namespace android::hardware

