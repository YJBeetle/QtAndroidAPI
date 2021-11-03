#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::audiofx
{
	class Virtualizer_Settings : public JObject
	{
	public:
		// Fields
		jshort strength();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Virtualizer_Settings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Virtualizer_Settings(QAndroidJniObject obj);
		
		// Constructors
		Virtualizer_Settings();
		Virtualizer_Settings(JString arg0);
		
		// Methods
		JString toString() const;
	};
} // namespace android::media::audiofx

