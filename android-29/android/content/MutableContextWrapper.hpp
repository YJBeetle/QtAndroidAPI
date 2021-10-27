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
		
		MutableContextWrapper(QAndroidJniObject obj);
		// Constructors
		MutableContextWrapper(android::content::Context &arg0);
		MutableContextWrapper() = default;
		
		// Methods
		void setBaseContext(android::content::Context arg0);
	};
} // namespace android::content

