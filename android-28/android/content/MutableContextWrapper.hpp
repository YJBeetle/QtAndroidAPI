#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Context.hpp"
#include "./ContextWrapper.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableContextWrapper(const char *className, const char *sig, Ts...agv) : android::content::ContextWrapper(className, sig, std::forward<Ts>(agv)...) {}
		MutableContextWrapper(QJniObject obj);
		
		// Constructors
		MutableContextWrapper(android::content::Context arg0);
		
		// Methods
		void setBaseContext(android::content::Context arg0);
	};
} // namespace android::content

