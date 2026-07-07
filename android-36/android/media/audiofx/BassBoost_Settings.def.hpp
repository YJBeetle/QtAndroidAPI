#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::audiofx
{
	class BassBoost_Settings : public JObject
	{
	public:
		// Fields
		jshort strength();
		
		// QJniObject forward
		template<typename ...Ts> explicit BassBoost_Settings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BassBoost_Settings(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BassBoost_Settings();
		BassBoost_Settings(JString arg0);
		
		// Methods
		JString toString() const;
	};
} // namespace android::media::audiofx

