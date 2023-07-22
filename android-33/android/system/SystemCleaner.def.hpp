#pragma once

#include "../../JObject.hpp"

namespace java::lang::ref
{
	class Cleaner;
}

namespace android::system
{
	class SystemCleaner : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SystemCleaner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SystemCleaner(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::lang::ref::Cleaner cleaner();
	};
} // namespace android::system

