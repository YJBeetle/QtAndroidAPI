#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./Vector.hpp"

namespace java::util
{
	// Fields
	
	Vector::Vector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Vector::Vector()
	{
		__thiz = QAndroidJniObject(
			"java.util.Vector",
			"()V"
		);
	}
	Vector::Vector(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Vector",
			"(I)V",
			arg0
		);
	}
	Vector::Vector(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Vector",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	Vector::Vector(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Vector",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean Vector::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void Vector::add(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean Vector::addAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Vector::addAll(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Vector::addElement(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addElement",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jint Vector::capacity()
	{
		return __thiz.callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	void Vector::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject Vector::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Vector::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Vector::containsAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	void Vector::copyInto(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"copyInto",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	jobject Vector::elementAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"elementAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject Vector::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	void Vector::ensureCapacity(jint arg0)
	{
		__thiz.callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	jboolean Vector::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject Vector::firstElement()
	{
		return __thiz.callObjectMethod(
			"firstElement",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void Vector::forEach(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject Vector::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint Vector::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Vector::indexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Vector::indexOf(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	void Vector::insertElementAt(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"insertElementAt",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	jboolean Vector::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject Vector::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jobject Vector::lastElement()
	{
		return __thiz.callObjectMethod(
			"lastElement",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Vector::lastIndexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Vector::lastIndexOf(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Vector::listIterator()
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	QAndroidJniObject Vector::listIterator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	jboolean Vector::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject Vector::remove(jint arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean Vector::removeAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	void Vector::removeAllElements()
	{
		__thiz.callMethod<void>(
			"removeAllElements",
			"()V"
		);
	}
	jboolean Vector::removeElement(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeElement",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void Vector::removeElementAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeElementAt",
			"(I)V",
			arg0
		);
	}
	jboolean Vector::removeIf(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object()
		);
	}
	void Vector::replaceAll(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/UnaryOperator;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Vector::retainAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject Vector::set(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void Vector::setElementAt(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setElementAt",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	void Vector::setSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSize",
			"(I)V",
			arg0
		);
	}
	jint Vector::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void Vector::sort(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Vector::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	QAndroidJniObject Vector::subList(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	jobjectArray Vector::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray Vector::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jstring Vector::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Vector::trimToSize()
	{
		__thiz.callMethod<void>(
			"trimToSize",
			"()V"
		);
	}
} // namespace java::util

