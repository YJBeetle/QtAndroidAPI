#pragma once

#include "../../java/util/Observable.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::os
{
	class Handler;
}
class JString;

namespace android::content
{
	class ContentQueryMap : public java::util::Observable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentQueryMap(const char *className, const char *sig, Ts...agv) : java::util::Observable(className, sig, std::forward<Ts>(agv)...) {}
		ContentQueryMap(QAndroidJniObject obj);
		
		// Constructors
		ContentQueryMap(JObject arg0, JString arg1, jboolean arg2, android::os::Handler arg3);
		
		// Methods
		void close() const;
		JObject getRows() const;
		android::content::ContentValues getValues(JString arg0) const;
		void requery() const;
		void setKeepUpdated(jboolean arg0) const;
	};
} // namespace android::content

