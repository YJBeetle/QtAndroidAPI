#pragma once

#include "./Observable.hpp"

namespace android::database
{
	class ContentObserver;
}
namespace android::net
{
	class Uri;
}
class JObject;

namespace android::database
{
	class ContentObservable : public android::database::Observable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentObservable(const char *className, const char *sig, Ts...agv) : android::database::Observable(className, sig, std::forward<Ts>(agv)...) {}
		ContentObservable(QAndroidJniObject obj);
		
		// Constructors
		ContentObservable();
		
		// Methods
		void dispatchChange(jboolean arg0);
		void dispatchChange(jboolean arg0, android::net::Uri arg1);
		void notifyChange(jboolean arg0);
		void registerObserver(android::database::ContentObserver arg0);
		void registerObserver(JObject arg0);
	};
} // namespace android::database

