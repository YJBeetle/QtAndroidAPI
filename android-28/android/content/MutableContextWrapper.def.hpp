#pragma once

#include "./ContextWrapper.def.hpp"

namespace android::content
{
	class Context;
}

namespace android::content
{
	class MutableContextWrapper : public android::content::ContextWrapper
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MutableContextWrapper(const char *className, const char *sig, Ts...agv) : android::content::ContextWrapper(className, sig, std::forward<Ts>(agv)...) {}
		MutableContextWrapper(QAndroidJniObject obj) : android::content::ContextWrapper(obj) {}
		
		// Constructors
		MutableContextWrapper(android::content::Context arg0);
		
		// Methods
		void setBaseContext(android::content::Context arg0) const;
	};
} // namespace android::content

