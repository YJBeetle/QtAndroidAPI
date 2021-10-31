#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class Virtualizer_Settings : public __JniBaseClass
	{
	public:
		// Fields
		jshort strength();
		
		// QJniObject forward
		template<typename ...Ts> explicit Virtualizer_Settings(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Virtualizer_Settings(QJniObject obj);
		
		// Constructors
		Virtualizer_Settings();
		Virtualizer_Settings(jstring arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::media::audiofx

