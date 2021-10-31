#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_mipmap : public __JniBaseClass
	{
	public:
		// Fields
		static jint sym_def_app_icon();
		
		// QJniObject forward
		template<typename ...Ts> explicit R_mipmap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		R_mipmap(QJniObject obj);
		
		// Constructors
		R_mipmap();
		
		// Methods
	};
} // namespace android

