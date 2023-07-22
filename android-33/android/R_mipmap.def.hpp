#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_mipmap : public JObject
	{
	public:
		// Fields
		static jint sym_def_app_icon();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_mipmap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_mipmap(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		R_mipmap();
		
		// Methods
	};
} // namespace android

