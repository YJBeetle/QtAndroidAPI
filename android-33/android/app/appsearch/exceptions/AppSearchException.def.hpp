#pragma once

#include "../../../../java/lang/Exception.def.hpp"

namespace android::app::appsearch
{
	class AppSearchResult;
}
class JString;
class JThrowable;

namespace android::app::appsearch::exceptions
{
	class AppSearchException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		AppSearchException(jint arg0);
		AppSearchException(jint arg0, JString arg1);
		AppSearchException(jint arg0, JString arg1, JThrowable arg2);
		
		// Methods
		jint getResultCode() const;
		android::app::appsearch::AppSearchResult toAppSearchResult() const;
	};
} // namespace android::app::appsearch::exceptions

