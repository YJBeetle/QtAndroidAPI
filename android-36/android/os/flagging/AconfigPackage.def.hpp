#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::os::flagging
{
	class AconfigPackage : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AconfigPackage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AconfigPackage(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::os::flagging::AconfigPackage load(JString arg0);
		jboolean getBooleanFlagValue(JString arg0, jboolean arg1) const;
	};
} // namespace android::os::flagging

