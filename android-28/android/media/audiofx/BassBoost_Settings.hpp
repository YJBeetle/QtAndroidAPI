#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class BassBoost_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshort strength();
		
		// QJniObject forward
		template<typename ...Ts> explicit BassBoost_Settings(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BassBoost_Settings(QJniObject obj);
		
		// Constructors
		BassBoost_Settings();
		BassBoost_Settings(jstring arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::media::audiofx

