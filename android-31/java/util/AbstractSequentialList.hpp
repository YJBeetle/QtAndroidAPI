#pragma once

#include "./AbstractList.hpp"

class JObject;

namespace java::util
{
	class AbstractSequentialList : public java::util::AbstractList
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractSequentialList(const char *className, const char *sig, Ts...agv) : java::util::AbstractList(className, sig, std::forward<Ts>(agv)...) {}
		AbstractSequentialList(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void add(jint arg0, JObject arg1);
		jboolean addAll(jint arg0, JObject arg1);
		JObject get(jint arg0);
		JObject iterator();
		JObject listIterator(jint arg0);
		JObject remove(jint arg0);
		JObject set(jint arg0, JObject arg1);
	};
} // namespace java::util

