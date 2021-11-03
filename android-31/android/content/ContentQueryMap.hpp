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
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentQueryMap(const char *className, const char *sig, Ts...agv) : java::util::Observable(className, sig, std::forward<Ts>(agv)...) {}
		ContentQueryMap(QJniObject obj);
		
		// Constructors
		ContentQueryMap(JObject arg0, JString arg1, jboolean arg2, android::os::Handler arg3);
		
		// Methods
		void close();
		JObject getRows();
		android::content::ContentValues getValues(JString arg0);
		void requery();
		void setKeepUpdated(jboolean arg0);
	};
} // namespace android::content

