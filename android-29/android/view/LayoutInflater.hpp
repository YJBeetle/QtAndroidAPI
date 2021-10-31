#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::view
{
	class LayoutInflater : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LayoutInflater(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LayoutInflater(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject from(android::content::Context arg0);
		QAndroidJniObject cloneInContext(android::content::Context arg0);
		QAndroidJniObject createView(jstring arg0, jstring arg1, __JniBaseClass arg2);
		QAndroidJniObject createView(android::content::Context arg0, jstring arg1, jstring arg2, __JniBaseClass arg3);
		QAndroidJniObject getContext();
		QAndroidJniObject getFactory();
		QAndroidJniObject getFactory2();
		QAndroidJniObject getFilter();
		QAndroidJniObject inflate(jint arg0, android::view::ViewGroup arg1);
		QAndroidJniObject inflate(__JniBaseClass arg0, android::view::ViewGroup arg1);
		QAndroidJniObject inflate(jint arg0, android::view::ViewGroup arg1, jboolean arg2);
		QAndroidJniObject inflate(__JniBaseClass arg0, android::view::ViewGroup arg1, jboolean arg2);
		QAndroidJniObject onCreateView(android::content::Context arg0, android::view::View arg1, jstring arg2, __JniBaseClass arg3);
		void setFactory(__JniBaseClass arg0);
		void setFactory2(__JniBaseClass arg0);
		void setFilter(__JniBaseClass arg0);
	};
} // namespace android::view

