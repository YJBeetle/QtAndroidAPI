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
		AbstractSequentialList(QAndroidJniObject obj) : java::util::AbstractList(obj) {}
		
		// Constructors
		
		// Methods
		void add(jint arg0, JObject arg1) const;
		jboolean addAll(jint arg0, JObject arg1) const;
		JObject get(jint arg0) const;
		JObject iterator() const;
		JObject listIterator(jint arg0) const;
		JObject remove(jint arg0) const;
		JObject set(jint arg0, JObject arg1) const;
	};
} // namespace java::util

